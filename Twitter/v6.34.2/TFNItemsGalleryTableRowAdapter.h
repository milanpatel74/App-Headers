/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsTableRowAdapter.h>
#import <Twitter/TFNPagedGalleryCellDelegate.h>

@class NSMutableDictionary;

@interface TFNItemsGalleryTableRowAdapter : TFNItemsTableRowAdapter <TFNPagedGalleryCellDelegate> {

	NSMutableDictionary* _pageMap;

}

@property (nonatomic,retain) NSMutableDictionary * pageMap;              //@synthesize pageMap=_pageMap - In the implementation block
-(id)galleryCellWithClass:(Class)arg1 tableView:(id)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 initialization:(/*^block*/id)arg5 ;
-(void)pagedGalleryCellDidChange:(id)arg1 ;
-(void)willDisplayGalleryCell:(id)arg1 tableView:(id)arg2 ;
-(id)keyForGalleryCell:(id)arg1 ;
-(NSMutableDictionary *)pageMap;
-(void)setPageMap:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
