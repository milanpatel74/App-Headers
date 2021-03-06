/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAStaticTableViewController.h>

@class WASharedMetadataQuery, WACloudStatus;

@interface WABackupSettingsViewController : WAStaticTableViewController {

	WASharedMetadataQuery* _query;
	WACloudStatus* _cloudStatus;
	id _listenerObject;

}

@property (nonatomic,retain) WASharedMetadataQuery * query;              //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) WACloudStatus * cloudStatus;                //@synthesize cloudStatus=_cloudStatus - In the implementation block
@property (nonatomic,retain) id listenerObject;                          //@synthesize listenerObject=_listenerObject - In the implementation block
-(void)addAccountSection;
-(void)addBackupInformation;
-(void)addMetadataSection;
-(void)addActionsSection;
-(void)addRecentSection;
-(void)addMediaRestoreSection;
-(void)setListenerObject:(id)arg1 ;
-(id)listenerObject;
-(void)dealloc;
-(id)init;
-(WASharedMetadataQuery *)query;
-(id)initWithStyle:(long long)arg1 ;
-(void)setQuery:(WASharedMetadataQuery *)arg1 ;
-(void)viewDidLoad;
-(void)setCloudStatus:(WACloudStatus *)arg1 ;
-(WACloudStatus *)cloudStatus;
@end

