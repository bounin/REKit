/*
 NSObject+REResponder.h
 
 Copyright ©2012 Kazki Miura. All rights reserved.
*/

#import <Foundation/Foundation.h>


@interface NSObject (REResponder)

// Conformance
- (void)becomeConformable:(BOOL)flag toProtocol:(Protocol*)protocol;

// Block
- (BOOL)respondsToSelector:(SEL)selector withBlockName:(NSString*)nameOrNil usingBlock:(id)block;
- (id)blockNamed:(NSString*)blockName;
- (id)superBlockOfBlockNamed:(NSString*)blockName; // Needed ?????
- (void)removeBlockNamed:(NSString*)blockName;

@end
