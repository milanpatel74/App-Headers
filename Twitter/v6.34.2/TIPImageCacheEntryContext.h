/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCopying.h>

@class NSURL, NSDate;

@interface TIPImageCacheEntryContext : NSObject <NSCopying> {

	BOOL _updateExpiryOnAccess;
	BOOL _animated;
	double _TTL;
	NSURL* _URL;
	NSDate* _lastAccess;
	CGSize _dimensions;

}

@property (assign,nonatomic) BOOL updateExpiryOnAccess;                    //@synthesize updateExpiryOnAccess=_updateExpiryOnAccess - In the implementation block
@property (assign,nonatomic) double TTL;                                   //@synthesize TTL=_TTL - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSDate * lastAccess;                          //@synthesize lastAccess=_lastAccess - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;              //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) CGSize dimensions;                            //@synthesize dimensions=_dimensions - In the implementation block
-(void)setUpdateExpiryOnAccess:(BOOL)arg1 ;
-(void)setLastAccess:(NSDate *)arg1 ;
-(NSDate *)lastAccess;
-(BOOL)updateExpiryOnAccess;
-(id)initWithCacheEntryContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(CGSize)dimensions;
-(void)setDimensions:(CGSize)arg1 ;
-(void)setTTL:(double)arg1 ;
-(double)TTL;
@end
