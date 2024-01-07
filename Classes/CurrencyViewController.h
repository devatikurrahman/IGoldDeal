//
//  CurrencyViewController1.h
//  CalculationApps
//
//  Created by Atikur Rahman on 8/12/11.
//  Copyright 2011 Annanovas IT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ApplicationCell.h"


@interface CurrencyViewController : UIViewController <UIPickerViewDelegate> {

	UIPickerView *currencyPicker;
	
	NSMutableArray *currencyList;
    NSDictionary *data;

}

@property (nonatomic, retain) NSMutableArray *currencyList;
@property (nonatomic, assign) IBOutlet ApplicationCell *tmpCell;
@property (nonatomic, retain) NSDictionary *data;


-(IBAction) hideCurrencyPicker;

@end
