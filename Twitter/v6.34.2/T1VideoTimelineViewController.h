/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1GenericEventTimelineViewController.h>

@class TFNTwitterUser;

@interface T1VideoTimelineViewController : T1GenericEventTimelineViewController {

	TFNTwitterUser* _filterAccount;

}

@property (nonatomic,readonly) TFNTwitterUser * filterAccount;              //@synthesize filterAccount=_filterAccount - In the implementation block
-(id)scribePage;
-(TFNTwitterUser *)filterAccount;
-(id)initWithFilterAccount:(id)arg1 ;
-(void)_setupSearchQuery;
-(id)itemsForStreamObject:(id)arg1 atIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)setAccount:(id)arg1 ;
@end
