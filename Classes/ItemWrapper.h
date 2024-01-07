//
//  ItemWrapper.h
//  Fortuny Fabric Browser 2
//
//  Created by Roni on 3/26/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ItemWrapper : NSObject {
	
	NSDictionary *item;
	NSString *title;
	
	
}

@property (nonatomic, retain) NSDictionary * item;
@property (nonatomic, copy) NSString * title;

- (id)initWithItem:(NSDictionary *)data ;

- (int) getKarats;
- (NSString *) getCurrencyName;


@end
