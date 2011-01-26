//
//  Sound.h
//  WhiteNoise
//
//  Created by Frederik Dietz on 1/11/11.
//  Copyright 2011 XING AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NSString;

@interface Sound : NSObject {
	
}

//- (NSString*) name;
//- (Float32) nextFloat;

@property (nonatomic, readonly) NSString* name;
@property (nonatomic, readonly) Float32 nextFloat;

@end
