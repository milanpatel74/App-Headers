//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Secret17_DecryptedMessageMedia : NSObject
{
}

+ (id)decryptedMessageMediaAudioWithDuration:(id)arg1 mimeType:(id)arg2 size:(id)arg3 key:(id)arg4 iv:(id)arg5;
+ (id)decryptedMessageMediaVideoWithThumb:(id)arg1 thumbW:(id)arg2 thumbH:(id)arg3 duration:(id)arg4 mimeType:(id)arg5 w:(id)arg6 h:(id)arg7 size:(id)arg8 key:(id)arg9 iv:(id)arg10;
+ (id)decryptedMessageMediaDocumentWithThumb:(id)arg1 thumbW:(id)arg2 thumbH:(id)arg3 fileName:(id)arg4 mimeType:(id)arg5 size:(id)arg6 key:(id)arg7 iv:(id)arg8;
+ (id)decryptedMessageMediaContactWithPhoneNumber:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 userId:(id)arg4;
+ (id)decryptedMessageMediaGeoPointWithLat:(id)arg1 plong:(id)arg2;
+ (id)decryptedMessageMediaPhotoWithThumb:(id)arg1 thumbW:(id)arg2 thumbH:(id)arg3 w:(id)arg4 h:(id)arg5 size:(id)arg6 key:(id)arg7 iv:(id)arg8;
+ (id)decryptedMessageMediaEmpty;

@end

