/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, NSMutableArray, UILabel;

@interface WACallEventsTableViewCell : UITableViewCell {

	UIView* _topEdge;
	NSMutableArray* _customConstraints;
	UILabel* _dateLabel;
	NSMutableArray* _timeLabels;
	NSMutableArray* _eventLabels;
	NSMutableArray* _durationLabels;

}
-(void)configureWithAggregateCallEvent:(id)arg1 ;
-(void)addCustomConstraints:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
@end
