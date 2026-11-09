/* IL2CPP: Rotatelab.Extensions$$Find<object, object>
Il2CppObject* Rotatelab_Extensions__Find_object__object_ (System_Collections_Generic_IList_T__o* list, Il2CppObject* parameter, System_Func_T__P__bool__o* selector, const MethodInfo_1486D20* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Find<object, object>
   Il2CppObject* Rotatelab_Extensions__Find_object__object_ (System_Collections_Generic_IList_T__o*
   list, Il2CppObject* parameter, System_Func_T__P__bool__o* selector, const MethodInfo_1486D20*
   method); */

undefined4
Rotatelab_Extensions__Find_object__object__1486d20
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  
  if ((*(int *)(param_4 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01496dbc + 0x1496d50)), *(int *)(param_4 + 0x1c) == 0)) {
    FUN_00efd7c4(param_4);
  }
  uStack_1c = 0;
  if (*(int *)(**(int **)(_UNK_01496dc0 + 0x1496d74) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_object__object__1489c5c
                    (param_1,param_2,param_3,&uStack_1c,
                     *(undefined4 *)(*(int *)(param_4 + 0x1c) + 0xc));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = uStack_1c;
  }
  return uVar2;
}

