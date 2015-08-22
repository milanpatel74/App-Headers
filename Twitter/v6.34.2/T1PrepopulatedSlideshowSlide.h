/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class TFNTwitterStatus, NSString, UIImage, TFNTwitterEntityURL;

@interface T1PrepopulatedSlideshowSlide : NSObject {

	TFNTwitterStatus* _status;
	NSString* _imageURLString;
	NSString* _streamURLString;
	UIImage* _image;
	UIImage* _previewImage;
	id _transitionObject;
	TFNTwitterEntityURL* _entityURL;
	long long _slideType;
	CGSize _imageSize;

}

@property (nonatomic,retain) TFNTwitterStatus * status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * imageURLString;                      //@synthesize imageURLString=_imageURLString - In the implementation block
@property (nonatomic,copy) NSString * streamURLString;                     //@synthesize streamURLString=_streamURLString - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                       //@synthesize previewImage=_previewImage - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                             //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) id transitionObject;                          //@synthesize transitionObject=_transitionObject - In the implementation block
@property (nonatomic,retain) TFNTwitterEntityURL * entityURL;              //@synthesize entityURL=_entityURL - In the implementation block
@property (assign,nonatomic) long long slideType;                          //@synthesize slideType=_slideType - In the implementation block
-(TFNTwitterEntityURL *)entityURL;
-(NSString *)imageURLString;
-(void)setImageURLString:(NSString *)arg1 ;
-(void)setEntityURL:(TFNTwitterEntityURL *)arg1 ;
-(void)setStreamURLString:(NSString *)arg1 ;
-(void)setSlideType:(long long)arg1 ;
-(NSString *)streamURLString;
-(long long)slideType;
-(id)transitionObject;
-(void)setTransitionObject:(id)arg1 ;
-(UIImage *)previewImage;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(CGSize)imageSize;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
@end
