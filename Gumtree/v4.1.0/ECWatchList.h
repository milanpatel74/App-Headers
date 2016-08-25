/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/NSKeyedUnarchiverDelegate.h>

@class NSMutableArray, NSArray, NSString;

@interface ECWatchList : NSObject <NSKeyedUnarchiverDelegate> {

	NSMutableArray* _adArray;
	NSArray* _ads;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) NSArray * ads;                //@synthesize ads=_ads - In the implementation block
@property (nonatomic,retain) NSMutableArray * adArray;              //@synthesize adArray=_adArray - In the implementation block
+(id)readGumtreeUKFavoritesFromUserDefaults;
+(id)watchListPath;
+(id)readOldWatchlist:(id)arg1 ;
+(void)writeLocalWatchListIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)watchListFile;
+(id)readUpgrade;
+(void)readLocalWatchListIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(NSMutableArray *)adArray;
-(void)setAdArray:(NSMutableArray *)arg1 ;
-(NSArray *)ads;
@end
