//
//  IPMViewController.m
//  JOTPlan
//
//  Created by Gabriel on 5/22/14.
//  Copyright (c) 2014 Gabriel. All rights reserved.
//

#import "IPMViewController.h"

@interface IPMViewController ()

@end

@implementation IPMViewController



- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

-(IBAction)changeSwitch:(id)sender {

    //roach Switches
    if (_roachVisitSwitch.on){
        [self.roachVisitLabel setEnabled:YES];
        _roachVisitLabel.textColor = [UIColor blackColor];
        self.roachVisitLanguage = @"<br /><br />3 Visit Baiting services for the control of Cockroaches.<br /><br />";
        
    } else {
        _roachVisitLabel.textColor = [UIColor grayColor];
        
        self.roachVisitLanguage = @"";
    }
    if (_roachMonthlySwitch.on){
        [self.roachMonthlyLabel setEnabled:YES];
        _roachMonthlyLabel.textColor = [UIColor blackColor];
        self.roachMonthlyLanguage = @"<br /><br />Monthly Baiting services for the control of Cockroaches.<br /><br />";
        
    } else {
        _roachMonthlyLabel.textColor = [UIColor grayColor];
        
        self.roachMonthlyLanguage = @"";
    }
//rodent switches
    if (_rodentVisitSwitch.on){
        [self.rodentTrappingVisitLabel setEnabled:YES];
        _rodentTrappingVisitLabel.textColor = [UIColor blackColor];
        self.rodentVisitLanguage = @"<br /><br />3 Visit Rodent Trapping.<br /><br />";
        
    } else {
        _rodentTrappingVisitLabel.textColor = [UIColor grayColor];
        
        self.rodentVisitLanguage = @"";
    }
    if (_rodentMonthlySwitch.on){
        [self.rodentTrappingMonthlyLabel setEnabled:YES];
        _rodentTrappingMonthlyLabel.textColor = [UIColor blackColor];
        self.rodentMonthlyLanguage = @"<br /><br />Monthly Trapping services for the control of Rodents.<br /><br />";
        
    } else {
        _rodentTrappingMonthlyLabel.textColor = [UIColor grayColor];
        
        self.rodentMonthlyLanguage = @"";
    }

    //Mite Switches
    if (_miteSwitch.on){
        [self.miteVisitLabel setEnabled:YES];
        _miteVisitLabel.textColor = [UIColor blackColor];
        self.miteVisitLanguage = @"<br /><br />3 Visit Baiting services for the control of Cockroaches.<br /><br />";
        
    } else {
        _miteVisitLabel.textColor = [UIColor grayColor];
        
        self.miteVisitLanguage = @"";
    }

    //rodent exclusion switches
    if (_rodentExclusionVisitSwitch.on){
        [self.rodentExclusionVisitLabel setEnabled:YES];
        _rodentExclusionVisitLabel.textColor = [UIColor blackColor];
        self.rodentExclusionVisitLanguage = @"<br /><br />Rodent Proofing / Exclusion.<br /><br />";
        
    } else {
        _rodentExclusionVisitLabel.textColor = [UIColor grayColor];
        
        self.rodentExclusionVisitLanguage = @"";
    }
    if (_rodentExclusionMaintenanceSwitch.on){
        [self.rodentMaintenanceLabel setEnabled:YES];
        _rodentMaintenanceLabel.textColor = [UIColor blackColor];
        self.rodentExclusionMaintenanceLanguage = @"<br /><br />Maintenance of Rodent Exclusion services.";
    } else{
        _rodentMaintenanceLabel.textColor = [UIColor grayColor];
        
        self.rodentExclusionMaintenanceLanguage = @"";
    }
    //stinging pests switches
    if (_stingingVisitSwitch.on){
        [self.stingingVisitLabel setEnabled:YES];
        _stingingVisitLabel.textColor = [UIColor blackColor];
        self.stingingVisitLanguage = @"<br /><br />2 Visit removal / control services for stinging pests.<br /><br />";
        
    } else {
        _stingingVisitLabel.textColor = [UIColor grayColor];
        
        self.stingingVisitLanguage = @"";
    }
    if (_stingingMonthlySwitch.on){
        [self.stingingMonthlyLabel setEnabled:YES];
        _stingingMonthlyLabel.textColor = [UIColor blackColor];
        self.stingingMonthlyLanguage = @"<br /><br />2 Visit removal / control services for stinging pests.<br /><br />";
        
    } else {
        _stingingMonthlyLabel.textColor = [UIColor grayColor];
        
        self.stingingMonthlyLanguage = @"";
    }
    
    //general IPM switches
    if (_generalWeeklySwitch.on){
        [self.generalWeeklyLabel setEnabled:YES];
        _generalWeeklyLabel.textColor = [UIColor blackColor];
        self.generalWeeklyLanguage = @"<br /><br />2 Visit removal / control services for stinging pests.<br /><br />";
        
    } else {
        _generalWeeklyLabel.textColor = [UIColor grayColor];
        
        self.generalWeeklyLanguage = @"";
    }
    if (_generalMonthlySwitch.on){
        [self.generalMonthlyLabel setEnabled:YES];
        _generalMonthlyLabel.textColor = [UIColor blackColor];
        self.generalMonthlyLanguage = @"<br /><br />2 Visit removal / control services for stinging pests.<br /><br />";
        
    } else {
        _generalMonthlyLabel.textColor = [UIColor grayColor];
        
        self.generalMonthlyLanguage = @"";
    }
    

    //bird nest removal switches
    if (_birdVisitSwitch.on){
        [self.birdVisitLabel setEnabled:YES];
        _birdVisitLabel.textColor = [UIColor blackColor];
        self.birdVisitLanguage = @"<br /><br />3 Visit Baiting services for the control of Cockroaches.<br /><br />";
        
    } else {
        _birdVisitLabel.textColor = [UIColor grayColor];
        
        self.birdVisitLanguage = @"";
    }

    //bird exclusion switches
    if (_birdExclusionVisitSwitch.on){
        [self.birdExclusionVisitLabel setEnabled:YES];
        _birdExclusionVisitLabel.textColor = [UIColor blackColor];
        self.birdExclusionLanguage = @"<br /><br />3 Visit Baiting services for the control of Cockroaches.<br /><br />";
        
    } else {
        _birdExclusionVisitLabel.textColor = [UIColor grayColor];
        
        self.birdExclusionLanguage = @"";
    }
    if (_birdExclusionMaintenanceSwitch.on){
        [self.birdExclusionMaintenanceLabel setEnabled:YES];
        _birdExclusionMaintenanceLabel.textColor = [UIColor blackColor];
        self.birdExclusionMaintenanceLanguage = @"<br /><br />Maintenance of Bird Exclusion Services.<br /><br />";
        
    } else {
        _birdExclusionMaintenanceLabel.textColor = [UIColor grayColor];
        
        self.birdExclusionMaintenanceLanguage = @"";
    }


    
    
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [ipmScrollView setScrollEnabled:YES];
    [ipmScrollView setContentSize:CGSizeMake(320,1140)];
    
    
    
    
}



- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
