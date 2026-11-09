/* IL2CPP: Rotatelab.Scripts.BotClickHand.<ReleaseAfterBeat>d__14$$MoveNext
bool Rotatelab_Scripts_BotClickHand__ReleaseAfterBeat_d__14__MoveNext (Rotatelab_Scripts_BotClickHand__ReleaseAfterBeat_d__14_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BotClickHand.<ReleaseAfterBeat>d__14$$MoveNext
   bool Rotatelab_Scripts_BotClickHand__ReleaseAfterBeat_d__14__MoveNext
   (Rotatelab_Scripts_BotClickHand__ReleaseAfterBeat_d__14_o* __this, const MethodInfo* method); */

bool Rotatelab_Scripts_BotClickHand__ReleaseAfterBeat_d__14__MoveNext_ff4218(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 0x30);
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),0)
    ;
  }
  return iVar1 == 0;
}

