/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGPhotoHistogramBins;

@interface PGPhotoHistogram : NSObject {

	PGPhotoHistogramBins* _luminance;
	PGPhotoHistogramBins* _red;
	PGPhotoHistogramBins* _green;
	PGPhotoHistogramBins* _blue;

}
-(id)initWithLuminanceCArray:(unsigned long long*)arg1 redCArray:(unsigned long long*)arg2 greenCArray:(unsigned long long*)arg3 blueCArray:(unsigned long long*)arg4 ;
-(id)histogramBinsForType:(int)arg1 ;
@end
