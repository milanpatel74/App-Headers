/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCopying.h>
#import <Twitter/NSCoding.h>

@class NSMutableArray, NSArray;

@interface TFNTwitterCompositionAttachments : NSObject <NSCopying, NSCoding> {

	NSMutableArray* _assets;

}

@property (nonatomic,readonly) NSArray * mediaAssets; 
@property (nonatomic,retain) NSMutableArray * assets;              //@synthesize assets=_assets - In the implementation block
+(id)compositionAttachmentsWithAttachments:(id)arg1 editedAssets:(id)arg2 ;
-(NSArray *)mediaAssets;
-(unsigned long long)indexOfMediaAsset:(id)arg1 ;
-(BOOL)canAttachMedia:(id)arg1 ;
-(void)attachMediaAsset:(id)arg1 ;
-(id)initWithMediaAssets:(id)arg1 ;
-(BOOL)canAttachAdditionalMedia;
-(void)removeMediaAsset:(id)arg1 ;
-(BOOL)isEqualToCompositionAttachments:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)assets;
-(void)setAssets:(NSMutableArray *)arg1 ;
@end
