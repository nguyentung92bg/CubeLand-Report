/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$SendWebRequestAsync
Cysharp_Threading_Tasks_UniTask_string__o Rotatelab_Networking_HiroUnityWebRequestAdapter__SendWebRequestAsync (Rotatelab_Networking_HiroUnityWebRequestAdapter_o* __this, System_String_o* method, System_Uri_o* uri, System_Collections_Generic_IDictionary_string__string__o* headers, System_Byte_array* body, int32_t timeout, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$SendWebRequestAsync
   Cysharp_Threading_Tasks_UniTask_string__o
   Rotatelab_Networking_HiroUnityWebRequestAdapter__SendWebRequestAsync
   (Rotatelab_Networking_HiroUnityWebRequestAdapter_o* __this, System_String_o* method,
   System_Uri_o* uri, System_Collections_Generic_IDictionary_string__string__o* headers,
   System_Byte_array* body, int32_t timeout, System_Threading_CancellationToken_o cancellationToken,
   const MethodInfo* method); */

void Rotatelab_Networking_HiroUnityWebRequestAdapter__SendWebRequestAsync_1160114
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  pcVar1 = (char *)(_UNK_0117026c + 0x1170134);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170270 + 0x1170154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170274 + 0x1170160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170278 + 0x117016c));
    *pcVar1 = '\x01';
  }
  FUN_00f88e5c(&uStack_78,0x50);
  uVar2 = (uint)&uStack_78 | 4;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  thunk_FUN_00ec5080(uVar2,0);
  uStack_64 = param_2;
  thunk_FUN_00ec5080(&uStack_64,param_2);
  uStack_60 = param_3;
  thunk_FUN_00ec5080(&uStack_60,param_3);
  uStack_5c = param_4;
  thunk_FUN_00ec5080(&uStack_5c,param_4);
  uStack_58 = param_5;
  thunk_FUN_00ec5080(&uStack_58,param_5);
  uStack_68 = param_6;
  thunk_FUN_00ec5080(&uStack_68,param_6);
  uStack_54 = param_8;
  uStack_50 = param_7;
  thunk_FUN_00ec5080(&uStack_54,0);
  uStack_78 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0117027c + 0x1170220) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_HiroUnityWebRequestAdapter__SendWebRequestAsync_d__5__MoveNext_116187c
            (&uStack_78);
  func_0x010808ac(&uStack_88,uVar2,**(undefined4 **)(_UNK_01170280 + 0x117024c));
  *(undefined4 *)(param_1 + 1) = uStack_80;
  *param_1 = uStack_88;
  return;
}

