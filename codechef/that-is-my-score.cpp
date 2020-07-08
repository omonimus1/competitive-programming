// https://www.codechef.com/submit/WATSCORE
#include <iostream>
#include <vector>
using namespace std;

int solve_test()
{
    int my_score = 0;
    // Create a vector of 8 element and set all of them to 0
    vector<int>scorable_marks(8, 0);
    int submission_id, submission_score;
    int number_submission;
    cin >> number_submission;
    
    for(int i =0; i < number_submission; i++)
    {
        cin >> submission_id >> submission_score;
        if(submission_id > 8 && submission_id < 1)
            continue;
        else
        {
            // There is a scorable submission_
            if(scorable_marks[submission_id-1] < submission_score)
                scorable_marks[submission_id-1] = submission_score;
        }
    }
    
    for(int i=0; i < scorable_marks.size(); i++)
        my_score += scorable_marks[i];
        
    return my_score;
}

int main() {
	
	int test_cases;
	cin >> test_cases;
	
	while(test_cases--)
	    cout << solve_test() <<endl;
	
	
	return 0;
}
