/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UILabel, NSDate, NSTimer, UIColor, NSString;

@interface NotifyingTimeLeftCounter : NSObject {

	UILabel* targetLabel;
	NSDate* endTime;
	double criticalTimeLeftInterval;
	NSTimer* updateTimer;
	UIColor* textColor;
	UIColor* criticalTimeLeftTextColor;
	BOOL itemEnded;
	NSString* itemID;

}

@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * criticalTimeLeftTextColor; 
@property (nonatomic,retain) UILabel * targetLabel; 
@property (assign) double criticalTimeLeftInterval; 
@property (nonatomic,retain) NSDate * endTime; 
@property (nonatomic,copy) NSString * itemID; 
-(id)initWithTargetLabel:(id)arg1 ;
-(void)setCriticalTimeLeftInterval:(double)arg1 ;
-(UILabel *)targetLabel;
-(void)setTargetLabel:(UILabel *)arg1 ;
-(void)setCriticalTimeLeftTextColor:(UIColor *)arg1 ;
-(void)startCounting;
-(id)findParentCellOfTargetLabel;
-(double)calcTimeLeft;
-(UIColor *)criticalTimeLeftTextColor;
-(double)criticalTimeLeftInterval;
-(void)dealloc;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)update;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSString *)itemID;
-(void)stopUpdating;
-(void)setItemID:(NSString *)arg1 ;
@end
