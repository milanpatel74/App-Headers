/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBWebImageSpecifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface FBWebImageAssetsLibrarySpecifier : FBValueObject <FBWebImageSpecifier, NSCopying> {

	unsigned long long _indexHint;
	NSURL* _assetURL;
	NSURL* _groupURL;
	long long _assetSizes;
	NSString* _logicalIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long indexHint;                   //@synthesize indexHint=_indexHint - In the implementation block
@property (nonatomic,copy,readonly) NSURL * assetURL;                          //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * groupURL;                          //@synthesize groupURL=_groupURL - In the implementation block
@property (nonatomic,readonly) long long assetSizes;                           //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,copy,readonly) NSString * logicalIdentifier;              //@synthesize logicalIdentifier=_logicalIdentifier - In the implementation block
+(id)type;
-(id)initWithIndexHint:(unsigned long long)arg1 assetURL:(id)arg2 groupURL:(id)arg3 assetSizes:(long long)arg4 ;
-(unsigned long long)indexHint;
-(NSString *)logicalIdentifier;
-(id)initWithIndexHint:(unsigned long long)arg1 assetURL:(id)arg2 groupURL:(id)arg3 assetSizes:(long long)arg4 logicalIdentifier:(id)arg5 ;
-(long long)assetSizes;
-(NSURL *)groupURL;
-(NSURL *)assetURL;
@end
