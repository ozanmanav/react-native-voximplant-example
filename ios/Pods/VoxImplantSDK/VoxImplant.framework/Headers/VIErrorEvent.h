/*
 *  Copyright (c) 2011-2019, Zingaya, Inc. All rights reserved.
 */

#import "VIMessengerEvent.h"

/**
 * Interface that represents messenger error events.
 *
 * | Code | Error description                                              |
 * |------|----------------------------------------------------------------|
 * | 1    | Wrong transport message structure.                             |
 * | 2    | Unknown event name.                                            |
 * | 3    | User not auth.                                                 |
 * | 4    | Wrong message structure.                                       |
 * | 5    | Conversation not found or user not in participant list.        |
 * | 6    | Conversation not found or user can't moderate conversation.    |
 * | 7    | Conversation already exists.                                   |
 * | 8    | Conversation does not exist.                                   |
 * | 9    | Message already exists.                                        |
 * | 10   | Message does not exists.                                       |
 * | 11   | Message was deleted.                                           |
 * | 12   | ACL error.                                                     |
 * | 13   | User already in participant list.                              |
 * | 14   | No rights to edit user.                                        |
 * | 15   | Public join is not available in this conversation.             |
 * | 16   | Conversation was deleted.                                      |
 * | 17   | Conversation is distinct.                                      |
 * | 18   | User validation Error.                                         |
 * | 19   | Lists mismatch.                                                |
 * | 20   | RESERVED.                                                      |
 * | 21   | Range larger than allowed by service.                          |
 * | 22   | Number of requested objects is larger than allowed by service. |
 * | 23   | Message size so large.                                         |
 * | 24   | Seq is too big.                                                |
 * | 30   | IM service not available. Try again later.                     |
 * | 500  | Internal error.                                                |
 * | 777  | Oops! Something went wrong.                                    |
 */
@interface VIErrorEvent : VIMessengerEvent

/**
 * Error code.
 */
@property(nonatomic, assign, readonly) NSInteger code;

/**
 * Error description.
 */
@property(nonatomic, strong, readonly) NSString *errorDescription;

@end
