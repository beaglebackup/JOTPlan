//
//  IPMViewController.h
//  JOTPlan
//
//  Created by Gabriel on 5/22/14.
//  Copyright (c) 2014 Gabriel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IPMViewController : UIViewController {
    IBOutlet UIScrollView *ipmScrollView;
}

//scroll view
//@property (strong, nonatomic) IBOutlet UIScrollView *ipmScrollView;
//@property (strong, nonatomic) IBOutlet UIView *ipmContainerView;


//labels
@property (strong, nonatomic) IBOutlet UILabel *roachLabel;
@property (strong, nonatomic) IBOutlet UILabel *roachVisitLabel;
@property (strong, nonatomic) IBOutlet UILabel *roachMonthlyLabel;
@property (strong, nonatomic) IBOutlet UILabel *roachAmountLabel;
@property (strong, nonatomic) IBOutlet UILabel *rodentTrappingLabel;
@property (strong, nonatomic) IBOutlet UILabel *rodentTrappingVisitLabel;
@property (strong, nonatomic) IBOutlet UILabel *rodentTrappingMonthlyLabel;
@property (strong, nonatomic) IBOutlet UILabel *rodentTrappingAmountLabel;
@property (strong, nonatomic) IBOutlet UILabel *rodentExclusionLabel;
@property (strong, nonatomic) IBOutlet UILabel *rodentExclusionVisitLabel;
@property (strong, nonatomic) IBOutlet UILabel *rodentMaintenanceLabel;
@property (strong, nonatomic) IBOutlet UILabel *rodentExclusionAmountLabel;
@property (strong, nonatomic) IBOutlet UILabel *miteLabel;
@property (strong, nonatomic) IBOutlet UILabel *miteVisitLabel;
@property (strong, nonatomic) IBOutlet UILabel *miteAmountLabel;
@property (strong, nonatomic) IBOutlet UILabel *stingingLabel;
@property (strong, nonatomic) IBOutlet UILabel *stingingVisitLabel;
@property (strong, nonatomic) IBOutlet UILabel *stingingMonthlyLabel;
@property (strong, nonatomic) IBOutlet UILabel *stingingAmountLabel;
@property (strong, nonatomic) IBOutlet UILabel *generalLabel;
@property (strong, nonatomic) IBOutlet UILabel *generalWeeklyLabel;
@property (strong, nonatomic) IBOutlet UILabel *generalMonthlyLabel;
@property (strong, nonatomic) IBOutlet UILabel *generalAmountLabel;
@property (strong, nonatomic) IBOutlet UILabel *birdLabel;
@property (strong, nonatomic) IBOutlet UILabel *birdVisitLabel;
@property (strong, nonatomic) IBOutlet UILabel *birdAmountLabel;
@property (strong, nonatomic) IBOutlet UILabel *birdExclusionLabel;
@property (strong, nonatomic) IBOutlet UILabel *birdExclusionVisitLabel;
@property (strong, nonatomic) IBOutlet UILabel *birdExclusionMaintenanceLabel;
@property (strong, nonatomic) IBOutlet UILabel *birdExclusionAmountLabel;



//switches
@property (strong, nonatomic) IBOutlet UISwitch *roachVisitSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *roachMonthlySwitch;
@property (strong, nonatomic) IBOutlet UISwitch *rodentVisitSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *rodentMonthlySwitch;
@property (strong, nonatomic) IBOutlet UISwitch *rodentExclusionVisitSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *rodentExclusionMaintenanceSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *miteSwitch;

@property (strong, nonatomic) IBOutlet UISwitch *stingingVisitSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *stingingMonthlySwitch;
@property (strong, nonatomic) IBOutlet UISwitch *generalWeeklySwitch;
@property (strong, nonatomic) IBOutlet UISwitch *generalMonthlySwitch;
@property (strong, nonatomic) IBOutlet UISwitch *birdVisitSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *birdExclusionVisitSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *birdExclusionMaintenanceSwitch;

//text Fields
@property (strong, nonatomic) IBOutlet UITextField *roachTextField;
@property (strong, nonatomic) IBOutlet UITextField *rodentTextField;
@property (strong, nonatomic) IBOutlet UITextField *exclusionTextField;
@property (strong, nonatomic) IBOutlet UITextField *miteTextField;
@property (strong, nonatomic) IBOutlet UITextField *stingingTextField;
@property (strong, nonatomic) IBOutlet UITextField *generalTextField;
@property (strong, nonatomic) IBOutlet UITextField *birdControlTextField;
@property (strong, nonatomic) IBOutlet UITextField *birdExclusionTextField;

//buttons and actions
-(IBAction)changeSwitch:(id)sender;

//IPM Services Language NSString
@property (strong, nonatomic) NSString *roachVisitLanguage;
@property (strong, nonatomic) NSString *roachMonthlyLanguage;
@property (strong, nonatomic) NSString *rodentVisitLanguage;
@property (strong, nonatomic) NSString *rodentMonthlyLanguage;
@property (strong, nonatomic) NSString *rodentExclusionVisitLanguage;
@property (strong, nonatomic) NSString *rodentExclusionMaintenanceLanguage;
@property (strong, nonatomic) NSString *miteVisitLanguage;
@property (strong, nonatomic) NSString *stingingVisitLanguage;
@property (strong, nonatomic) NSString *stingingMonthlyLanguage;
@property (strong, nonatomic) NSString *generalWeeklyLanguage;
@property (strong, nonatomic) NSString *generalMonthlyLanguage;
@property (strong, nonatomic) NSString *birdVisitLanguage;
@property (strong, nonatomic) NSString *birdExclusionLanguage;
@property (strong, nonatomic) NSString *birdExclusionMaintenanceLanguage;














@end
