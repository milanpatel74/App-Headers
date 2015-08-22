/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCopying.h>

@class NSDictionary;

@interface TFNTraitCollection : NSObject <NSCopying> {

	NSDictionary* _storage;

}

@property (nonatomic,readonly) long long userInterfaceIdiom; 
@property (nonatomic,readonly) double displayScale; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,retain) NSDictionary * storage;                       //@synthesize storage=_storage - In the implementation block
+(id)traitCollectionWithDisplayScale:(double)arg1 ;
+(id)traitCollectionWithHorizontalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithVerticalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithTraitsFromCollections:(id)arg1 ;
+(id)traitCollectionWithUserInterfaceIdiom:(long long)arg1 ;
-(void)setStorage:(NSDictionary *)arg1 ;
-(long long)userInterfaceIdiom;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)verticalSizeClass;
-(long long)horizontalSizeClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)displayScale;
-(BOOL)containsTraitsInCollection:(id)arg1 ;
-(NSDictionary *)storage;
@end
