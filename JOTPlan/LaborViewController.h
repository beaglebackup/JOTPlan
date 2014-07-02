//
//  LaborViewController.h
//  JOTPlan
//
//  Created by Gabriel on 5/22/14.
//  Copyright (c) 2014 Gabriel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>

@interface LaborViewController : UIViewController{
IBOutlet UIScrollView *laborScrollView;
}

//Bar Button
@property (strong, nonatomic) IBOutlet UIBarButtonItem *laborSaveButton;

@property (strong, nonatomic) IBOutlet UIBarButtonItem *laborAddButton;



//Labor Labels
@property (strong, nonatomic) IBOutlet UILabel *laborFloorLabel;
@property (strong, nonatomic) IBOutlet UILabel *laborRoomLabel;
@property (strong, nonatomic) IBOutlet UILabel *laborAreaLabel;
@property (strong, nonatomic) IBOutlet UILabel *laborConditionsLabel;
@property (strong, nonatomic) IBOutlet UILabel *laborCommentsLabel;
@property (strong, nonatomic) IBOutlet UILabel *laborMaterialsLabel;
@property (strong, nonatomic) IBOutlet UILabel *laborLaborLabel;



//Labor TextFields
@property (strong, nonatomic) IBOutlet UITextField *laborFloorTextField;
@property (strong, nonatomic) IBOutlet UITextField *laborRoomTextField;
@property (strong, nonatomic) IBOutlet UITextField *laborAreaTextFIeld;
@property (strong, nonatomic) IBOutlet UITextField *laborConditionsTextField;
@property (strong, nonatomic) IBOutlet UITextField *laborCommentsTextField;
@property (strong, nonatomic) IBOutlet UITextField *laborMaterialsTextField;
@property (strong, nonatomic) IBOutlet UITextField *laborLaborTextField;



//Labor Buttons
@property (strong, nonatomic) IBOutlet UIButton *laborCamera1Button;
@property (strong, nonatomic) IBOutlet UIButton *laborCamera2Button;
@property (strong, nonatomic) IBOutlet UIButton *laborCamera3Button;
@property (strong, nonatomic) IBOutlet UIButton *laborCamera4Button;
@property (strong, nonatomic) IBOutlet UIButton *whoButton;
@property (strong, nonatomic) IBOutlet UIButton *generatePDFButton;

//Labor Action
- (IBAction)generatePDF:(id)sender;

@end
