/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECItemDataProviderProtocol.h>
#import <Gumtree/ECItemDataRemoveProtocol.h>

@class NSString, NSArray;

@interface ECUserAdsDataProvider : NSObject <ECItemDataProviderProtocol, ECItemDataRemoveProtocol> {

	BOOL hasMore;
	BOOL _updatingResults;

}

@property (assign,nonatomic) BOOL updatingResults;                         //@synthesize updatingResults=_updatingResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned long long totalItems; 
@property (nonatomic,readonly) BOOL hasMore; 
@property (nonatomic,readonly) BOOL updating; 
-(unsigned long long)totalItems;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)updatingResults;
-(void)setUpdatingResults:(BOOL)arg1 ;
-(BOOL)hasMore;
-(void)removeItems:(id)arg1 localRemovedHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)updating;
-(id)init;
-(NSArray *)items;
-(void)clearResults;
@end
