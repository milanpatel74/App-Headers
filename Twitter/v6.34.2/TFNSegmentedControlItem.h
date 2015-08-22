/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIImage, NSString;

@interface TFNSegmentedControlItem : NSObject {

	UIImage* _image;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,retain) UIImage * image;                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(id)initWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end
