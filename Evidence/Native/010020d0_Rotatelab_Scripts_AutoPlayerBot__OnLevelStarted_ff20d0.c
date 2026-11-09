/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$OnLevelStarted
void Rotatelab_Scripts_AutoPlayerBot__OnLevelStarted (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$OnLevelStarted
   void Rotatelab_Scripts_AutoPlayerBot__OnLevelStarted (Rotatelab_Scripts_AutoPlayerBot_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_AutoPlayerBot__OnLevelStarted_ff20d0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  Rotatelab_Scripts_AutoPlayerBot__StopLoop_ff207c();
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BotClickHand__Show_ff20d4(*(int *)(param_1 + 0x2c));
  uVar3 = Rotatelab_Scripts_AutoPlayerBot__PlayLoop_ff20fc(param_1);
  uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar3,0);
  puVar4 = (undefined4 *)(param_1 + 0x40);
  *puVar4 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

