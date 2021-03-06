//
//  NSView+QSKit.h
//  Q Branch Standard Kit
//
//  Created by Brent Simmons on 10/30/13.
//  Copyright (c) 2013 Q Branch LLC. All rights reserved.
//


@import Cocoa;


@interface NSView (QSKit)


/*Keeps subview at same size as receiver.*/

- (void)qs_addFullSizeConstraintsForSubview:(NSView *)view;

- (void)qs_setFrameIfNotEqual:(NSRect)r;

@end
