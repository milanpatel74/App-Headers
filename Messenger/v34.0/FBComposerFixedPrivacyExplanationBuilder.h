/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, FBComposerFixedPrivacyIcon;

@interface FBComposerFixedPrivacyExplanationBuilder : NSObject {

	NSString* _title;
	NSString* _label;
	FBComposerFixedPrivacyIcon* _icon;
	BOOL _allowShowingFullDescriptionOfFixedPrivacy;
	NSString* _fullDescriptionOfFixedPrivacy;
	BOOL _isLoaded;

}
+(id)composerFixedPrivacyExplanation;
+(id)composerFixedPrivacyExplanationFromExistingComposerFixedPrivacyExplanation:(id)arg1 ;
-(id)withLabel:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)withIcon:(id)arg1 ;
-(id)withIsLoaded:(BOOL)arg1 ;
-(id)withAllowShowingFullDescriptionOfFixedPrivacy:(BOOL)arg1 ;
-(id)withFullDescriptionOfFixedPrivacy:(id)arg1 ;
-(id)build;
@end
