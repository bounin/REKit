/*
 RSClassA.m
 
 Copyright ©2012 Kazki Miura. All rights reserved.
*/

#import "RSClassA.h"


@implementation RSClassA

- (void)log
{
	// Log
	NSLog(@"%s - line %d", __PRETTY_FUNCTION__, __LINE__);
}

- (void)say:(NSString*)string
{
	// Say
	NSLog(@"%@", string);
}

- (void)dealloc
{
	// ?????
	NSLog(@"%s", __PRETTY_FUNCTION__);
	
	// super
	[super dealloc];
}

@end
