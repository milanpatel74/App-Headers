/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TIPImageStoreRequest.h>
#import <Twitter/NSCopying.h>

@class NSURL, NSString, UIImage, TFNTwitterMediaAsset;

@interface TFNTwitterMediaAssetImageStoreRequest : NSObject <TIPImageStoreRequest, NSCopying> {

	BOOL _shouldResetExpiryOnAccess;
	NSURL* _imageURL;
	NSString* _imageIdentifier;
	double _timeToLive;
	UIImage* _image;
	long long _imageType;
	TFNTwitterMediaAsset* _mediaAsset;

}

@property (nonatomic,readonly) NSURL * imageURL;                             //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageIdentifier;              //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (assign,nonatomic) double timeToLive;                              //@synthesize timeToLive=_timeToLive - In the implementation block
@property (assign,nonatomic) BOOL shouldResetExpiryOnAccess;                 //@synthesize shouldResetExpiryOnAccess=_shouldResetExpiryOnAccess - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long imageType;                            //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,retain) TFNTwitterMediaAsset * mediaAsset;              //@synthesize mediaAsset=_mediaAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TFNTwitterMediaAsset *)mediaAsset;
-(void)setMediaAsset:(TFNTwitterMediaAsset *)arg1 ;
-(void)setImageURLString:(id)arg1 ;
-(NSString *)imageIdentifier;
-(BOOL)shouldResetExpiryOnAccess;
-(void)setShouldResetExpiryOnAccess:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(void)setImageType:(long long)arg1 ;
-(NSURL *)imageURL;
-(long long)imageType;
-(double)timeToLive;
-(void)setTimeToLive:(double)arg1 ;
@end

