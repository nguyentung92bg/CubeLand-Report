/* IL2CPP: Rotatelab.Scripts.BotRecorderGate$$Wait
System_Collections_IEnumerator_o* Rotatelab_Scripts_BotRecorderGate__Wait (Rotatelab_Scripts_BotRecorderGate_o* __this, System_Func_bool__o* isClean, float settleSeconds, System_Action_o* onReady, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BotRecorderGate$$Wait
   System_Collections_IEnumerator_o* Rotatelab_Scripts_BotRecorderGate__Wait
   (Rotatelab_Scripts_BotRecorderGate_o* __this, System_Func_bool__o* isClean, float settleSeconds,
   System_Action_o* onReady, const MethodInfo* method); */

int Rotatelab_Scripts_BotRecorderGate__Wait_ff44e0
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01004570 + 0x1004500);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01004574 + 0x1004514));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01004578 + 0x1004528));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_2);
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x18),param_4);
  return iVar1;
}

