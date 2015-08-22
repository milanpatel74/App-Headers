/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class NSString;

@interface T1SensitiveMediaCellAXHelper : NSObject {

	NSString* _accessibilityLabel;
	unsigned long long _accessibilityTraits;
	CGRect _accessibilityFrame;

}

@property (nonatomic,copy) NSString * accessibilityLabel;                         //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (assign,nonatomic) unsigned long long accessibilityTraits;              //@synthesize accessibilityTraits=_accessibilityTraits - In the implementation block
@property (assign,nonatomic) CGRect accessibilityFrame;                           //@synthesize accessibilityFrame=_accessibilityFrame - In the implementation block
-(NSString *)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
@end
