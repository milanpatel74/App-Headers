/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>

@interface FBFeedHScrollWithPaginatorComponentController : CKComponentController {

	unsigned long long _currentPageIndex;
	unsigned long long _prevPageIndex;
	unsigned long long _currentDotIndex;
	unsigned long long _prevDotIndex;
	unsigned long long _numTotalStories;

}
-(void)didMount;
-(void)didUpdateComponent;
-(void)didRemount;
-(void)componentEndDraggingScrollView:(id)arg1 withContext:(id)arg2 ;
-(void)didScrollToComponent:(id)arg1 atIndex:(id)arg2 ;
-(void)updateArrowsWithShouldPulseLeftArrow:(BOOL)arg1 shouldPulseRightArrow:(BOOL)arg2 ;
@end
