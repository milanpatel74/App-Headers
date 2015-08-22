/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, UIImage;

@interface FBImageModel : NSObject {

	NSString* _source;
	UIImage* _image;
	CGSize _size;

}

@property (nonatomic,retain) NSString * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) UIImage * image;                //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize size;                    //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
@end
