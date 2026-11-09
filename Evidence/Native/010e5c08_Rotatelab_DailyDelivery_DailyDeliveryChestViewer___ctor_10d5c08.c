/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChestViewer$$.ctor
void Rotatelab_DailyDelivery_DailyDeliveryChestViewer___ctor (Rotatelab_DailyDelivery_DailyDeliveryChestViewer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChestViewer$$.ctor
   void Rotatelab_DailyDelivery_DailyDeliveryChestViewer___ctor
   (Rotatelab_DailyDelivery_DailyDeliveryChestViewer_o* __this, const MethodInfo* method); */

int Rotatelab_DailyDelivery_DailyDeliveryChestViewer___ctor_10d5c08(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010e5ca0 + 0x10e5c1c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5ca4 + 0x10e5c30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5ca8 + 0x10e5c3c));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_010e5cac + 0x10e5c5c);
  *(undefined4 *)(param_1 + 0x18) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x1c) = 0x435c0000;
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  System_Collections_Generic_List_object____ctor_267d274
            (uVar2,**(undefined4 **)(_UNK_010e5cb0 + 0x10e5c78));
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar2);
  pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

