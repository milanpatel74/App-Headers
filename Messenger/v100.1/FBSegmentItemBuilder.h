/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, UIImage;

@interface FBSegmentItemBuilder : NSObject {

	NSAttributedString* _title;
	NSAttributedString* _highlightedTitle;
	UIImage* _leftImage;
	unsigned long long _badgeCount;
	UIImage* _rightImage;

}
+(id)segmentItem;
+(id)segmentItemFromExistingSegmentItem:(id)arg1 ;
-(id)withHighlightedTitle:(id)arg1 ;
-(id)withLeftImage:(id)arg1 ;
-(id)withBadgeCount:(unsigned long long)arg1 ;
-(id)withRightImage:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end

