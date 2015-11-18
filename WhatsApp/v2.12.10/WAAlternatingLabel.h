/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class NSTimer, NSString;

@interface WAAlternatingLabel : UILabel {

	NSTimer* _timer;
	int _index;
	NSString* _primaryText;
	NSString* _secondaryText;
	double _interval;

}

@property (nonatomic,copy) NSString * primaryText;                           //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                         //@synthesize secondaryText=_secondaryText - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating; 
@property (assign,nonatomic) double interval;                                //@synthesize interval=_interval - In the implementation block
-(void)switchLabel:(id)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)primaryText;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(NSString *)secondaryText;
@end
