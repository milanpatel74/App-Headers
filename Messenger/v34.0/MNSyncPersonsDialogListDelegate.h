/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>

@protocol MNSyncPersonsDialogListDelegateListener;
@class NSArray, FBImageDownloader, NSString;

@interface MNSyncPersonsDialogListDelegate : NSObject <UITableViewDelegate> {

	NSArray* _syncPersons;
	id<MNSyncPersonsDialogListDelegateListener> _listener;
	FBImageDownloader* _imageDownloader;

}

@property (nonatomic,retain) NSArray * syncPersons;                                                    //@synthesize syncPersons=_syncPersons - In the implementation block
@property (assign,nonatomic,__weak) id<MNSyncPersonsDialogListDelegateListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) FBImageDownloader * imageDownloader;                                      //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBImageDownloader *)imageDownloader;
-(void)setImageDownloader:(FBImageDownloader *)arg1 ;
-(void)_startImageDownloadForCell:(id)arg1 scenePath:(id)arg2 ;
-(id)initWithImageDownloader:(id)arg1 listener:(id)arg2 ;
-(NSArray *)syncPersons;
-(void)setSyncPersons:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<MNSyncPersonsDialogListDelegateListener>)listener;
-(void)setListener:(id<MNSyncPersonsDialogListDelegateListener>)arg1 ;
@end
