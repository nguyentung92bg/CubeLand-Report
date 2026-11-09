/* IL2CPP: Rotatelab.Scripts.BotRecorderGate.<Wait>d__2$$MoveNext
bool Rotatelab_Scripts_BotRecorderGate__Wait_d__2__MoveNext (Rotatelab_Scripts_BotRecorderGate__Wait_d__2_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BotRecorderGate.<Wait>d__2$$MoveNext
   bool Rotatelab_Scripts_BotRecorderGate__Wait_d__2__MoveNext
   (Rotatelab_Scripts_BotRecorderGate__Wait_d__2_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_BotRecorderGate__Wait_d__2__MoveNext_ff45a4(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  
  fVar1 = _UNK_01004688;
  uVar2 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    fVar1 = *(float *)(param_1 + 0x1c);
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (*(float *)(param_1 + 0x14) <= fVar1) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
    fVar1 = _UNK_01004688;
    if (iVar3 != 0) {
      fVar4 = *(float *)(param_1 + 0x1c);
      fVar1 = (float)UnityEngine_Time__get_unscaledDeltaTime_3610a80(0);
      fVar1 = fVar4 + fVar1;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(float *)(param_1 + 0x1c) = fVar1;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    uVar2 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar2;
}

