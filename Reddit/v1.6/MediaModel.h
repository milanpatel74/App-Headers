/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSDictionary;

@interface MediaModel : NSObject <NSCoding> {

	NSString* _imageID;
	NSArray* _resolutionInfo;
	NSDictionary* _variantInfo;

}

@property (nonatomic,copy) NSArray * resolutionInfo;                     //@synthesize resolutionInfo=_resolutionInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * variantInfo;                   //@synthesize variantInfo=_variantInfo - In the implementation block
@property (nonatomic,copy) NSString * imageID;                           //@synthesize imageID=_imageID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allImageURLs; 
@property (nonatomic,copy,readonly) NSArray * allVideoURLs; 
+(id)mediaModelFromData:(id)arg1 ;
-(NSArray *)resolutionInfo;
-(NSDictionary *)variantInfo;
-(void)setResolutionInfo:(NSArray *)arg1 ;
-(void)setVariantInfo:(NSDictionary *)arg1 ;
-(CGSize)lowestResolutionImageSize;
-(id)lowestResolutionImageURLString;
-(id)safeURLForDictionary:(id)arg1 key:(id)arg2 ;
-(id)highestResolutionVideoData;
-(NSArray *)allVideoURLs;
-(id)lowestResolutionVideoData;
-(id)lowestResolutionVideoURLString;
-(CGSize)postImageSizeFittingSize:(CGSize)arg1 ;
-(CGSize)highestResolutionImageSize;
-(NSArray *)allImageURLs;
-(id)postImageURLStringFittingSize:(CGSize)arg1 ;
-(id)highestResolutionImageURLString;
-(id)highestResolutionVideoURLString;
-(id)postVideoURLStringFittingSize:(CGSize)arg1 ;
-(CGSize)postVideoSizeFittingSize:(CGSize)arg1 ;
-(CGSize)highestResolutionVideoSize;
-(CGSize)lowestResolutionVideoSize;
-(BOOL)isServerCroppingPreviewImages;
-(BOOL)hasBadImageQuality;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(BOOL)hasVideos;
-(void)setImageID:(NSString *)arg1 ;
-(NSString *)imageID;
@end
