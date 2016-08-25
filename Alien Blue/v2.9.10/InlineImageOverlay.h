/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/JMViewOverlay.h>

@class InlineImageNode;

@interface InlineImageOverlay : JMViewOverlay {

	InlineImageNode* _node;

}

@property (retain) InlineImageNode * node;              //@synthesize node=_node - In the implementation block
+(double)heightForInlinePreviewForNode:(id)arg1 constrainedToWidth:(double)arg2 ;
+(void)precacheImageForNode:(id)arg1 constrainedToWidth:(double)arg2 ;
-(id)fetchInlineImageOnComplete:(/*^block*/id)arg1 ;
-(void)updateForNode:(id)arg1 ;
-(void)grabInlineImage;
-(void)drawRect:(CGRect)arg1 ;
-(InlineImageNode *)node;
-(void)setNode:(InlineImageNode *)arg1 ;
@end
