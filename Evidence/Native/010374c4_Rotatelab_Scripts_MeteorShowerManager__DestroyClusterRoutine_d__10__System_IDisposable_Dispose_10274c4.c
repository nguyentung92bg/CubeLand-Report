/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager.<DestroyClusterRoutine>d__10$$System.IDisposable.Dispose
void Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10__System_IDisposable_Dispose (Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Scripts.MeteorShowerManager.<DestroyClusterRoutine>d__10$$System.IDisposable.Dispose
   void 
   Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10__System_IDisposable_Dispose
   (Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10_o* __this, const MethodInfo*
   method); */

void Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_d__10__System_IDisposable_Dispose_10274c4
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  uVar3 = *(int *)(param_1 + 8) + 3;
  if (5 < uVar3) {
    return;
  }
  if ((1 << (uVar3 & 0xff) & 0x31U) == 0) {
    return;
  }
  pcVar5 = (char *)(_UNK_010379e4 + 0x1037944);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010379e8 + 0x1037958));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_010379ec + 0x1037984)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_010379d0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_010379ec + 0x1037984),0);
LAB_010379d0:
                    /* WARNING: Could not recover jumptable at 0x010379e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}

