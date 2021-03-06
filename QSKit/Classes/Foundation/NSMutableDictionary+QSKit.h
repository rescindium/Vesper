//
//  NSMutableDictionary+QSKit.h
//  Q Branch Standard Kit
//
//  Created by Brent Simmons on 10/31/13.
//  Copyright (c) 2013 Q Branch LLC. All rights reserved.
//


@import Foundation;


@interface NSMutableDictionary (QSKit)


/*If obj or key are nil, does nothing. No exception thrown.*/

- (void)qs_safeSetObject:(id)obj forKey:(id)key;


@end
