/* This program was written by Hannah Li, for 
the UC Riverside course CS170 - Intro to AI. 

This MATLAB pseduocode was obtained from CS170 materials 
written by Professor Eamonn Keogh:

stub function:
function accuracy = leave_one_out_cross_validation(data, current_set, feature_to_add)
    accuracy = rand;
end

k-fold cross validation function: //only implement after confirming search with random stub^
function accuracy = leave_one_out_cross_validation(data, current_set, feature_to_add) //data is entire dataset (.txt)

//edit file to "delete" features currently not being used
//look at which features are in current_set and feature_to_add
//temporarily set all others NOT in curr_set and feat_add to 0

number_correctly_classified = 0;
    
    for i = 1 : size(data,1) //1st dimension is # of rows
        object_to_classify = data(i,2:end);
        label_object_to_classify = data(i,1);

        nearest_neighbor_distance = inf;
        nearest_neighbor_location = inf;
        for k = 1 : size(data,1)
            disp(['Ask if '], int2str(i), ' is nearest neighbour with ', int2str(k)])

            if k~=i //NOT equal to(don't compare w/ yourself)
                distance = sqrt(sum((object_to_classify - data(k,2:end)).^2)); //Euclidean distance
                if distance < nearest_neighbor_distance
                    nearest_neighbor_distance = distance;
                    nearest_neighbor_location = k;
                    nearest_neighbor_label = data(nearest_neighbor_location,1);
                end
            end
        end

        if label_object_to_classify == nearest_neighbor_label;
            number_correctly_classified = number_correctly_classified + 1;
        end

    end
    accuracy = number_correctly_classified / size(data,1);
end

feature search function:
function feature_search_demo(data) //.txt file
current_set_of_features = []; //track which features have been added already
    for i = 1 : size(data,2)-1  //in MATLAB, size(a,2) returns 2nd dimension aka # of columns
        disp(['On the ', num2str(i), 'th level of the search tree'])
        feature_to_add_at_this_level = [];
        best_so_far_accuracy = 0;

        for k = 1 : size(data,2)-1
            if isempty(intersect(current_set_of_features, k)) //only consider adding if not already added
            disp(['--Considering adding the ', num2str(k), 'feature'])
            accuracy = leave_one_out_cross_validation(data, current_set_of_features, k+1); //temp stub

            if accuracy > best_so_far_accuracy
                best_so_far_accuracy = accuracy;
                feature_to_add_at_this_level = k;
            end

        end

        disp(['On level ', num2str(i), ' i added feature ', num2str(feature_to_add_at_this_level), ' to current set'])
    end
end

*/
#include <algorithm> //used for find() and transform()
#include <vector>
#include <cmath> //used for sqrt()
#include <numeric> //used for accumulate() 
#include <iostream> //used for cin cout
#include <limits> //used for infinity() of double type
#include <fstream> //used to read and write from .txt files
#include <sstream> //used to read strings
#include <string>

using namespace std;

// stub function:
// function accuracy = leave_one_out_cross_validation(data, current_set, feature_to_add)
//     accuracy = rand;
// end

vector<vector<double>> temp_delete_columns(vector<vector<double>> data, vector<int> features_being_used, int f) {
    vector<vector<double>> copy = data; //use copy, so data is unaffected
    features_being_used.push_back(f);
    for (int i = 0; i < copy.at(0).size(); i++) { //for every column of data
        if (find(features_being_used.begin(), features_being_used.end(), i) == features_being_used.end()) {
            for (int j = 0; j < copy.size(); j++) {
                copy.at(j).at(i) = 0;
            }
        }
    }
    
    return copy;
}

double leave_one_out_cross_validation (vector<vector<double>> data, vector<int> current_set, int feature_to_add) {
    double accuracy = 0;
    vector<vector<double>> temp_data = data;
    if (!current_set.empty()) {
        vector<int> features_being_used = current_set; //we need to "delete" columns NOT being used
        temp_data = temp_delete_columns(data, features_being_used, feature_to_add);
    }

    int number_correctly_classified = 0;
    for (int i = 0; i < temp_data.size(); i++) { //for each row of data
        vector<double> object_to_classify;
        object_to_classify.insert(object_to_classify.begin(), temp_data.at(i).begin()+1, temp_data.at(i).end());
        double label_object_to_classify = temp_data.at(i).at(0); //1st column of row i
        // cout << "looping over i, at the " << i << " location" << endl;
        // cout << "The " << i << "th object is in class " << label_object_to_classify << endl;
        double nearest_neighbor_distance = std::numeric_limits<double>::infinity();
        int nearest_neighbor_location = std::numeric_limits<int>::infinity();
        double nearest_neighbor_label = 0;
        for (int k = 0; k < temp_data.size(); k++) {
            if (k != i) {
                // distance = sqrt(sum((object_to_classify - data(k,2:end)).^2)); //Euclidean distance
                double distance = 0;   
                for (int d = 0; d < object_to_classify.size(); d++) {
                    distance += pow((object_to_classify.at(d) - temp_data.at(k).at(d+1)), 2);
                } 
                distance = sqrt(distance);
                if (distance < nearest_neighbor_distance) {
                    nearest_neighbor_distance = distance;
                    nearest_neighbor_location = k;
                    nearest_neighbor_label = temp_data.at(nearest_neighbor_location).at(0);
                }
            }
        }
        //cout << i << endl;
        // cout << "Object " << i+1 << " is class " << label_object_to_classify << endl;
        // cout << "Its nearest neighbor is " << nearest_neighbor_location << " which is in class " << nearest_neighbor_label << endl;
        if (label_object_to_classify == nearest_neighbor_label) {
            number_correctly_classified++;
            // cout << "num:" << number_correctly_classified << endl;
        }
    }
    accuracy = static_cast<double>(number_correctly_classified) / data.size();
    cout << "accuracy: " << static_cast<double>(accuracy) << endl;
    return accuracy;
}

vector<vector<double>> read_doubles_from_file(const string file_name) {
    vector<vector<double>> data;
    ifstream in(file_name);
    if (in.is_open()) {
        string line;
        while (getline(in, line)) {
            std::stringstream ss(line);
            data.push_back({});
            double d;
            while (ss >> d) {
                data.back().push_back(d);
            }
        }
    } else {
        cout << "error opening file: " << file_name << endl;
    }
    in.close();

    return data;
}

void feature_search_demo(string file_name) {
    
    vector<vector<double>> data = read_doubles_from_file(file_name); //same as data() in pseudocode

    vector<int> current_set_of_features; //CHANGE SIZE DEPENDING ON FEATURES
    for (int i = 1; i < data.at(0).size(); i++) {
        cout << "On the " << i-1 << "th level of the search tree" << endl;
        int feature_to_add_at_this_level = 0;
        double best_so_far_accuracy = 0;
        double accuracy = 0;
        
        for (int k = 1; k < data.at(0).size(); k++) {
            if(find(current_set_of_features.begin(), current_set_of_features.end(), k) == current_set_of_features.end()) {
                //if k is NOT in current_set (we only consider adding if k has not already been added)
                cout << "--Considering adding the " << k << "th feature" << endl;
                // accuracy = rand();
                accuracy = leave_one_out_cross_validation(data, current_set_of_features, feature_to_add_at_this_level);
                if (accuracy > best_so_far_accuracy) {
                    best_so_far_accuracy = accuracy;
                    feature_to_add_at_this_level = k;
                    cout << endl;
                }
            }
        }
        current_set_of_features.push_back(feature_to_add_at_this_level);
        cout << "set of features: " << endl;
        for (int f = 0; f < current_set_of_features.size(); f++) {
            cout << current_set_of_features.at(f) << " ";
        }
        cout << endl;
    }
    

}

int main() {
    feature_search_demo("CS170_Small_Data__62.txt");
    return 0;
}