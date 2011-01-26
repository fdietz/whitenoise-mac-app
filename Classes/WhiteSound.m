//
//  WhiteSound.m
//  WhiteNoise
//
//  Created by Frederik Dietz on 1/11/11.
//  Copyright 2011 XING AG. All rights reserved.
//

#import "WhiteSound.h"


@implementation WhiteSound

- (NSString *) name {
		return @"White";
}

- (Float32) nextFloat {
	return (Float32) rand()/RAND_MAX - .5f;
}

@end
