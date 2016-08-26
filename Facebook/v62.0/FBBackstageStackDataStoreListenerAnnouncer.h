/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBBackstageStackDataStoreListener.h>

@class NSString;

@interface FBBackstageStackDataStoreListenerAnnouncer : FBAnnouncerBase <FBBackstageStackDataStoreListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stackDataStore:(id)arg1 didUpdatePerson:(id)arg2 ;
-(void)stackDataStore:(id)arg1 replacedAssets:(id)arg2 withPosts:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
