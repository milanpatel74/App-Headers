/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface TWTRFrameSheet : NSObject {

	unsigned long long _imageWidth;
	unsigned long long _imageHeight;
	unsigned long long _rows;
	unsigned long long _columns;
	unsigned long long _frameCount;
	UIImage* _frameSheet;

}

@property (nonatomic,readonly) unsigned long long rows;                     //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) unsigned long long frameCount;               //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) UIImage * frameSheet;                        //@synthesize frameSheet=_frameSheet - In the implementation block
@property (nonatomic,readonly) unsigned long long imageWidth;               //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long imageHeight;              //@synthesize imageHeight=_imageHeight - In the implementation block
-(id)frameArray;
-(UIImage *)frameSheet;
-(id)initWithImage:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 frameCount:(unsigned long long)arg4 imageWidth:(unsigned long long)arg5 imageHeight:(unsigned long long)arg6 ;
-(unsigned long long)frameCount;
-(unsigned long long)rows;
-(unsigned long long)imageWidth;
-(unsigned long long)imageHeight;
-(unsigned long long)columns;
@end

