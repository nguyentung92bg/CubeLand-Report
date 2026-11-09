/* IL2CPP: Rotatelab.Scripts.BotClickHand$$MoveTo
System_Collections_IEnumerator_o* Rotatelab_Scripts_BotClickHand__MoveTo (Rotatelab_Scripts_BotClickHand_o* __this, UnityEngine_Vector3_o screenPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BotClickHand$$MoveTo
   System_Collections_IEnumerator_o* Rotatelab_Scripts_BotClickHand__MoveTo
   (Rotatelab_Scripts_BotClickHand_o* __this, UnityEngine_Vector3_o screenPosition, const
   MethodInfo* method); */

int Rotatelab_Scripts_BotClickHand__MoveTo_ff3b70
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01003bf4 + 0x1003b8c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01003bf8 + 0x1003ba4));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01003bfc + 0x1003bb8));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  return iVar1;
}

