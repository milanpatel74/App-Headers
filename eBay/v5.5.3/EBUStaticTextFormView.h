/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUFormView.h>

@class EUILabel;

@interface EBUStaticTextFormView : EBUFormView {

	EUILabel* _textLabel;

}

@property (readonly) EUILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
+(id)staticTextFormView;
-(void)setTextualDisplayAsPlaceholder:(id)arg1 ;
-(void)setTextualDisplayAsChoice:(id)arg1 ;
-(id)archiveOfState;
-(void)setStateFromArchive:(id)arg1 ;
-(id)init;
-(EUILabel *)textLabel;
@end

