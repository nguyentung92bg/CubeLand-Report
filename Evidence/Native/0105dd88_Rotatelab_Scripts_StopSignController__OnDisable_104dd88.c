/* IL2CPP: Rotatelab.Scripts.StopSignController$$OnDisable
void Rotatelab_Scripts_StopSignController__OnDisable (Rotatelab_Scripts_StopSignController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StopSignController$$OnDisable
   void Rotatelab_Scripts_StopSignController__OnDisable (Rotatelab_Scripts_StopSignController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_StopSignController__OnDisable_104dd88(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  pcVar6 = (char *)(_UNK_0105de30 + 0x105dd9c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105de34 + 0x105ddb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105de38 + 0x105ddbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105de3c + 0x105ddc8));
    *pcVar6 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105de40 + 0x105dddc));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105de44 + 0x105ddf0));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_0105de48 + 0x105de0c),0)
  ;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_01050ee0 + 0x1050e54);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050ee4 + 0x1050e68));
    *pcVar6 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_01050ee8 + 0x1050e80);
  iVar1 = *(int *)(iVar3 + 0xbc);
  do {
    iVar7 = 0;
    iVar2 = System_Delegate__Remove_2bbcc8c(iVar1,uVar4,0);
    if (iVar2 != 0) {
      uVar5 = *puVar8;
      iVar7 = thunk_FUN_00f00bc8(iVar2,uVar5);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar2,uVar5);
      }
    }
    iVar2 = FUN_00efd180((int *)(iVar3 + 0xbc),iVar7,iVar1);
    bVar9 = iVar2 != iVar1;
    iVar1 = iVar2;
  } while (bVar9);
  return;
}

