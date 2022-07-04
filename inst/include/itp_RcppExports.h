// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_itp_RCPPEXPORTS_H_GEN_
#define RCPP_itp_RCPPEXPORTS_H_GEN_

#include <Rcpp.h>

namespace itp {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("itp", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("itp", "_itp_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in itp");
            }
        }
    }

    inline List itp_cpp(const SEXP& f, const List& pars, double& a, double& b, double& ya, double& yb, const double& epsilon, const double& k1, const double& k2, double& for_rk, double& inc) {
        typedef SEXP(*Ptr_itp_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_itp_cpp p_itp_cpp = NULL;
        if (p_itp_cpp == NULL) {
            validateSignature("List(*itp_cpp)(const SEXP&,const List&,double&,double&,double&,double&,const double&,const double&,const double&,double&,double&)");
            p_itp_cpp = (Ptr_itp_cpp)R_GetCCallable("itp", "_itp_itp_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_itp_cpp(Shield<SEXP>(Rcpp::wrap(f)), Shield<SEXP>(Rcpp::wrap(pars)), Shield<SEXP>(Rcpp::wrap(a)), Shield<SEXP>(Rcpp::wrap(b)), Shield<SEXP>(Rcpp::wrap(ya)), Shield<SEXP>(Rcpp::wrap(yb)), Shield<SEXP>(Rcpp::wrap(epsilon)), Shield<SEXP>(Rcpp::wrap(k1)), Shield<SEXP>(Rcpp::wrap(k2)), Shield<SEXP>(Rcpp::wrap(for_rk)), Shield<SEXP>(Rcpp::wrap(inc)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline double xptr_eval(const double& x, const List& pars, SEXP xpsexp) {
        typedef SEXP(*Ptr_xptr_eval)(SEXP,SEXP,SEXP);
        static Ptr_xptr_eval p_xptr_eval = NULL;
        if (p_xptr_eval == NULL) {
            validateSignature("double(*xptr_eval)(const double&,const List&,SEXP)");
            p_xptr_eval = (Ptr_xptr_eval)R_GetCCallable("itp", "_itp_xptr_eval");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_xptr_eval(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(pars)), Shield<SEXP>(Rcpp::wrap(xpsexp)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline List itp_c(const SEXP& f, const List& pars, double& a, double& b, const double& epsilon = 1e-10, const double& k1 = 0.2, const double& k2 = 2.0, const double& n0 = 1.0) {
        typedef SEXP(*Ptr_itp_c)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_itp_c p_itp_c = NULL;
        if (p_itp_c == NULL) {
            validateSignature("List(*itp_c)(const SEXP&,const List&,double&,double&,const double&,const double&,const double&,const double&)");
            p_itp_c = (Ptr_itp_c)R_GetCCallable("itp", "_itp_itp_c");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_itp_c(Shield<SEXP>(Rcpp::wrap(f)), Shield<SEXP>(Rcpp::wrap(pars)), Shield<SEXP>(Rcpp::wrap(a)), Shield<SEXP>(Rcpp::wrap(b)), Shield<SEXP>(Rcpp::wrap(epsilon)), Shield<SEXP>(Rcpp::wrap(k1)), Shield<SEXP>(Rcpp::wrap(k2)), Shield<SEXP>(Rcpp::wrap(n0)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline double wiki_cpp(const double& x, const List& pars) {
        typedef SEXP(*Ptr_wiki_cpp)(SEXP,SEXP);
        static Ptr_wiki_cpp p_wiki_cpp = NULL;
        if (p_wiki_cpp == NULL) {
            validateSignature("double(*wiki_cpp)(const double&,const List&)");
            p_wiki_cpp = (Ptr_wiki_cpp)R_GetCCallable("itp", "_itp_wiki_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_wiki_cpp(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(pars)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double neg_wiki_cpp(const double& x, const List& pars) {
        typedef SEXP(*Ptr_neg_wiki_cpp)(SEXP,SEXP);
        static Ptr_neg_wiki_cpp p_neg_wiki_cpp = NULL;
        if (p_neg_wiki_cpp == NULL) {
            validateSignature("double(*neg_wiki_cpp)(const double&,const List&)");
            p_neg_wiki_cpp = (Ptr_neg_wiki_cpp)R_GetCCallable("itp", "_itp_neg_wiki_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_neg_wiki_cpp(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(pars)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double lambert_cpp(const double& x, const List& pars) {
        typedef SEXP(*Ptr_lambert_cpp)(SEXP,SEXP);
        static Ptr_lambert_cpp p_lambert_cpp = NULL;
        if (p_lambert_cpp == NULL) {
            validateSignature("double(*lambert_cpp)(const double&,const List&)");
            p_lambert_cpp = (Ptr_lambert_cpp)R_GetCCallable("itp", "_itp_lambert_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_lambert_cpp(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(pars)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double trig1_cpp(const double& x, const List& pars) {
        typedef SEXP(*Ptr_trig1_cpp)(SEXP,SEXP);
        static Ptr_trig1_cpp p_trig1_cpp = NULL;
        if (p_trig1_cpp == NULL) {
            validateSignature("double(*trig1_cpp)(const double&,const List&)");
            p_trig1_cpp = (Ptr_trig1_cpp)R_GetCCallable("itp", "_itp_trig1_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_trig1_cpp(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(pars)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double poly3_cpp(const double& x, const List& pars) {
        typedef SEXP(*Ptr_poly3_cpp)(SEXP,SEXP);
        static Ptr_poly3_cpp p_poly3_cpp = NULL;
        if (p_poly3_cpp == NULL) {
            validateSignature("double(*poly3_cpp)(const double&,const List&)");
            p_poly3_cpp = (Ptr_poly3_cpp)R_GetCCallable("itp", "_itp_poly3_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_poly3_cpp(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(pars)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double linear_cpp(const double& x, const List& pars) {
        typedef SEXP(*Ptr_linear_cpp)(SEXP,SEXP);
        static Ptr_linear_cpp p_linear_cpp = NULL;
        if (p_linear_cpp == NULL) {
            validateSignature("double(*linear_cpp)(const double&,const List&)");
            p_linear_cpp = (Ptr_linear_cpp)R_GetCCallable("itp", "_itp_linear_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_linear_cpp(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(pars)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double staircase_cpp(const double& x, const List& pars) {
        typedef SEXP(*Ptr_staircase_cpp)(SEXP,SEXP);
        static Ptr_staircase_cpp p_staircase_cpp = NULL;
        if (p_staircase_cpp == NULL) {
            validateSignature("double(*staircase_cpp)(const double&,const List&)");
            p_staircase_cpp = (Ptr_staircase_cpp)R_GetCCallable("itp", "_itp_staircase_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_staircase_cpp(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(pars)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double log_cpp(const double& x, const List& pars) {
        typedef SEXP(*Ptr_log_cpp)(SEXP,SEXP);
        static Ptr_log_cpp p_log_cpp = NULL;
        if (p_log_cpp == NULL) {
            validateSignature("double(*log_cpp)(const double&,const List&)");
            p_log_cpp = (Ptr_log_cpp)R_GetCCallable("itp", "_itp_log_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_cpp(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(pars)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline SEXP xptr_create(std::string fstr) {
        typedef SEXP(*Ptr_xptr_create)(SEXP);
        static Ptr_xptr_create p_xptr_create = NULL;
        if (p_xptr_create == NULL) {
            validateSignature("SEXP(*xptr_create)(std::string)");
            p_xptr_create = (Ptr_xptr_create)R_GetCCallable("itp", "_itp_xptr_create");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_xptr_create(Shield<SEXP>(Rcpp::wrap(fstr)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

}

#endif // RCPP_itp_RCPPEXPORTS_H_GEN_
