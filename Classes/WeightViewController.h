//
//  WeightViewController.h
//  IGoldDeal
//
//  Created by Atikur Rahman on 8/15/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ApplicationCell.h"


@interface WeightViewController : UIViewController <UIPickerViewDelegate> {
	
	UIPickerView *weightPicker;
	
	NSMutableArray *weightList;
    NSDictionary *data;
	
	NSString *weight_str;
	
}

@property (nonatomic, retain) NSMutableArray *weightList;
@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) NSString *weight_str;


-(IBAction) hideWeightPicker;

@end
